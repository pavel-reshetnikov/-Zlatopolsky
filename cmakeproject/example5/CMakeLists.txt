# CMakeList.txt: ������ CMake ��� example5; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

# �������� �������� � ����������� ���� ����� �������.
add_executable (example5 example5.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET example5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
