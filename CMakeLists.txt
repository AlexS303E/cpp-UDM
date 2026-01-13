cmake_minimum_required(VERSION 3.20)
project(UDM3 VERSION 1.0.0 LANGUAGES CXX)

# === КРИТИЧЕСКИ ВАЖНО: Указываем путь к Qt с 3D ===
set(CMAKE_PREFIX_PATH "C:/msys64/mingw64/lib/cmake/Qt5" CACHE PATH "Путь к установке Qt5")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Настройка vcpkg (если используется)
if(DEFINED ENV{VCPKG_ROOT} AND NOT CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
endif()

# Поиск Qt со ВСЕМИ необходимыми компонентами
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets PrintSupport 3DCore 3DRender 3DInput 3DExtras)

# Поиск OpenCV
find_package(OpenCV REQUIRED)

# 6. Файлы проекта
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "src/*.h")
file(GLOB UI_FILES "src/*.ui")

# 7. Создание исполняемого файла
add_executable(UDM3 ${SOURCES} ${HEADERS} ${UI_FILES})

# 8. Подключение библиотек Qt (только те, что были найдены)
target_link_libraries(UDM3 PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::PrintSupport   # Теперь компонент будет найден
    Qt5::3DCore
    Qt5::3DRender
    Qt5::3DInput
    Qt5::3DExtras
    ${OpenCV_LIBS}      # OpenCV подключается здесь
)


# 9. Подключение OpenCV и включение директорий
target_link_libraries(UDM3 PRIVATE ${OpenCV_LIBS})
target_include_directories(UDM3 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${OpenCV_INCLUDE_DIRS}
)

# 10. Копирование ресурсов после сборки
add_custom_command(TARGET UDM3 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "${CMAKE_SOURCE_DIR}/resources/3D_models"
    "$<TARGET_FILE_DIR:UDM3>/3D_models"
    COMMENT "Копирование 3D моделей..."
)
