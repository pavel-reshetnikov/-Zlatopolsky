# CMakeList.txt: ������ CMake ��� example4; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

# �������� �������� � ����������� ���� ����� �������.
add_executable (example4 example4.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET example4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
