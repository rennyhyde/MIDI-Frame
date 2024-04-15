//MIDI Frame main code
#Define DEBUG 0

//Lightning Lipgloss Life MIDI as Array
unsigned char Midi1[] = {
  0x4d, 0x54, 0x68, 0x64, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01,
  0x00, 0x60, 0x4d, 0x54, 0x72, 0x6b, 0x00, 0x00, 0x0a, 0x28, 0x00, 0xff,
  0x03, 0x0e, 0x49, 0x6e, 0x73, 0x74, 0x20, 0x31, 0x2a, 0x6a, 0x6f, 0x69,
  0x6e, 0x65, 0x64, 0x00, 0x00, 0xff, 0x58, 0x04, 0x04, 0x02, 0x24, 0x08,
  0x00, 0xff, 0x58, 0x04, 0x04, 0x02, 0x24, 0x08, 0x8c, 0x00, 0x90, 0x29,
  0x50, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80, 0x24,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x56,
  0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x24,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x56,
  0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x24,
  0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x51,
  0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x4c,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x28,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x28,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x53,
  0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x28,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x4f,
  0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x80, 0x51,
  0x40, 0x00, 0x90, 0x58, 0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x58,
  0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x80, 0x51,
  0x40, 0x00, 0x90, 0x59, 0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x59,
  0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x2d,
  0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c,
  0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80, 0x2b,
  0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2b,
  0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a, 0x40, 0x00, 0x90, 0x53,
  0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x2b,
  0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x4a,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x53,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x4f, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x58, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x58, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x59, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x59, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x56,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x4c,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a,
  0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x53,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x4a, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x4c,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x26,
  0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x26, 0x40, 0x00, 0x90, 0x4d,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x4d,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x24,
  0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24,
  0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x24,
  0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x24, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x26,
  0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x26,
  0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x56,
  0x50, 0x18, 0x90, 0x26, 0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x26,
  0x40, 0x00, 0x90, 0x4d, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x4d,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x80, 0x4f,
  0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x28, 0x50, 0x00, 0x80, 0x53,
  0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x4f, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x58, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x58, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x59, 0x50, 0x18, 0x90, 0x29,
  0x50, 0x00, 0x80, 0x59, 0x40, 0x18, 0x80, 0x29, 0x40, 0x00, 0x90, 0x51,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x54,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c, 0x40, 0x00, 0x90, 0x56,
  0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x56, 0x40, 0x18, 0x80, 0x2d,
  0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x4c,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x80, 0x4a,
  0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x2b, 0x50, 0x00, 0x80, 0x53,
  0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a, 0x50, 0x18, 0x90, 0x28,
  0x50, 0x00, 0x80, 0x4a, 0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x28,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x80, 0x4f, 0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x28,
  0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x28, 0x40, 0x00, 0x90, 0x4f,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x4f, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x58,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x58, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x59,
  0x50, 0x18, 0x90, 0x29, 0x50, 0x00, 0x80, 0x59, 0x40, 0x18, 0x80, 0x29,
  0x40, 0x00, 0x90, 0x51, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x51,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c,
  0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x54,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x80, 0x4c,
  0x40, 0x00, 0x90, 0x56, 0x50, 0x18, 0x90, 0x2d, 0x50, 0x00, 0x80, 0x56,
  0x40, 0x18, 0x80, 0x2d, 0x40, 0x00, 0x90, 0x4c, 0x50, 0x18, 0x90, 0x2b,
  0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a,
  0x50, 0x18, 0x80, 0x4a, 0x40, 0x00, 0x90, 0x54, 0x50, 0x18, 0x90, 0x2b,
  0x50, 0x00, 0x80, 0x54, 0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a,
  0x50, 0x18, 0x80, 0x4a, 0x40, 0x00, 0x90, 0x53, 0x50, 0x18, 0x90, 0x2b,
  0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x2b, 0x40, 0x00, 0x90, 0x4a,
  0x50, 0x18, 0x80, 0x4a, 0x40, 0x8c, 0x00, 0x90, 0x5b, 0x50, 0x18, 0x90,
  0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x90, 0x3e, 0x50, 0x00, 0x80,
  0x4d, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90, 0x5b, 0x50, 0x18, 0x90,
  0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x90, 0x3e, 0x50, 0x00, 0x80,
  0x4d, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90, 0x5b, 0x50, 0x18, 0x90,
  0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90,
  0x60, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80, 0x60, 0x40, 0x18, 0x90,
  0x3e, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90,
  0x60, 0x50, 0x18, 0x90, 0x4c, 0x50, 0x00, 0x80, 0x60, 0x40, 0x18, 0x90,
  0x3e, 0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90,
  0x60, 0x50, 0x18, 0x90, 0x51, 0x50, 0x00, 0x80, 0x60, 0x40, 0x18, 0x80,
  0x51, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90, 0x51, 0x50, 0x00, 0x80,
  0x64, 0x40, 0x18, 0x90, 0x41, 0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80,
  0x41, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90, 0x51, 0x50, 0x00, 0x80,
  0x64, 0x40, 0x18, 0x90, 0x41, 0x50, 0x00, 0x80, 0x51, 0x40, 0x18, 0x80,
  0x41, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80,
  0x64, 0x40, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90, 0x62, 0x50, 0x18, 0x90,
  0x53, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x90, 0x37, 0x50, 0x00, 0x80,
  0x53, 0x40, 0x18, 0x80, 0x37, 0x40, 0x00, 0x90, 0x62, 0x50, 0x18, 0x90,
  0x53, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x90, 0x37, 0x50, 0x00, 0x80,
  0x53, 0x40, 0x18, 0x80, 0x37, 0x40, 0x00, 0x90, 0x62, 0x50, 0x18, 0x90,
  0x54, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x80, 0x54, 0x40, 0x00, 0x90,
  0x5b, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x90,
  0x3e, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90,
  0x5b, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x90,
  0x3e, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80, 0x3e, 0x40, 0x00, 0x90,
  0x5b, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80, 0x5b, 0x40, 0x18, 0x80,
  0x4d, 0x40, 0x00, 0x90, 0x60, 0x50, 0x18, 0x90, 0x4d, 0x50, 0x00, 0x80,
  0x60, 0x40, 0x18, 0x90, 0x3e, 0x50, 0x00, 0x80, 0x4d, 0x40, 0x18, 0x80,
  0x3e, 0x40, 0x00, 0x90, 0x60, 0x50, 0x18, 0x90, 0x4c, 0x50, 0x00, 0x80,
  0x60, 0x40, 0x18, 0x90, 0x3e, 0x50, 0x00, 0x80, 0x4c, 0x40, 0x18, 0x80,
  0x3e, 0x40, 0x00, 0x90, 0x60, 0x50, 0x18, 0x90, 0x51, 0x50, 0x00, 0x80,
  0x60, 0x40, 0x18, 0x80, 0x51, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90,
  0x51, 0x50, 0x00, 0x80, 0x64, 0x40, 0x18, 0x90, 0x41, 0x50, 0x00, 0x80,
  0x51, 0x40, 0x18, 0x80, 0x41, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90,
  0x51, 0x50, 0x00, 0x80, 0x64, 0x40, 0x18, 0x90, 0x41, 0x50, 0x00, 0x80,
  0x51, 0x40, 0x18, 0x80, 0x41, 0x40, 0x00, 0x90, 0x64, 0x50, 0x18, 0x90,
  0x4d, 0x50, 0x00, 0x80, 0x64, 0x40, 0x18, 0x80, 0x4d, 0x40, 0x00, 0x90,
  0x62, 0x50, 0x18, 0x90, 0x53, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x90,
  0x37, 0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x37, 0x40, 0x00, 0x90,
  0x62, 0x50, 0x18, 0x90, 0x53, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x90,
  0x37, 0x50, 0x00, 0x80, 0x53, 0x40, 0x18, 0x80, 0x37, 0x40, 0x00, 0x90,
  0x62, 0x50, 0x18, 0x90, 0x54, 0x50, 0x00, 0x80, 0x62, 0x40, 0x18, 0x80,
  0x54, 0x40, 0x00, 0xff, 0x2f, 0x00
};
unsigned int Midi1_len = 2622;

unsigned int Ptr, EndBlock; //MIDI parse pointer
const int fs = 44100; //sample rate in Hz
uint8_t audio*;  //pointer to audio array
const long MThd = 0x4D546864;
const long MTrk = 0x4D54726B;
unsigned long Tempo = 500000;    // Default - microseconds per beat; ie 120bpm
unsigned int TempoDivisor;

/*
Skips over the specified number of bytes in the file
Updates the pointer to its new position
*/
void readIgnore(int n) {
  Ptr = Ptr + n;
}

/*
Read a number with n-byte precision, with n<=4
*/
unsigned long readNumber(int n) {
  long result = 0;
  for (int i=0; I<n; i++) {
    result = (result<<8) + pgm_read_byte(&Midi1[Ptr]);
  }
  return result;
}

/*
Read a variable length number
*/
unsigned long readVariable() {
  long result = 0;
  uint8_t b;
  do {
    b = pgm_read_byte(&Midi1[Ptr++]); //b is the current byte in the MIDI file
    result = (result<<7) + (b & 0x7F);  //move result over to the left by 7 bits and then add the last 7 bits of the current byte
  } while (b & 0x80); //while the first bit of the byte is 1, meaning the VLV continues
  return result;
}

void genAudio(unsigned char MIDI[]) {
  Ptr = 0;            //Start at beginning of file
  //Read header chunk
  unsigned long type = readNumber(4);     //Read first 4 bits of the MIDI file
  if (type != MThd && DEBUG) Serial.println("Error: MIDI file does not begin with header.");
  unsigned long len = readNumber(4);
  unsigned int format = readNumber(2);
  unsigned int tracks = readNumber(2);
  unsigned int division = readNumber(2);  // Ticks per beat
  if (division & 0x80 && DEBUG) Serial.println("Error: Division is in SMPTE format.");
  TempoDivisor = (long)division*16000/Tempo;    //Not sure why 16000 and Tempo are hardcoded -- maybe you can change the tempo as you see fit
  //Process each track
  for (int t=0; t<tracks; t++) {
    //Read track chunk
    type = readNumber(4);
    if (type != MTrk && DEBUG) Serial.printf("Error: Track %d expected type [MTrk], got type %l", t, type);
    len readNumber(4);
    EndBlock= Ptr + len;
    //Parse track
    while (Ptr < EndBlock) {
      unsigned long delta = readVariable();
      uint8_t event = readNumber(1);
      uint8_t eventType = event & 0xF0;
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
