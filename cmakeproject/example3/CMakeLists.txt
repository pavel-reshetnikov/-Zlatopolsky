# CMakeList.txt: ������ CMake ��� example3; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

# �������� �������� � ����������� ���� ����� �������.
add_executable (example3 example3.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET example3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
