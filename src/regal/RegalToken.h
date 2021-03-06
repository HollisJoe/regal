/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#ifndef __REGAL_TOKEN_H__
#define __REGAL_TOKEN_H__

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include <GL/Regal.h>

#include <string>

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

namespace Token {

  const char * GLenumToString        (GLenum     v);
  const char * GLerrorToString       (GLenum     v); // gluErrorString
  const char * GLbooleanToString     (GLboolean  v);
  const char * internalFormatToString(GLint      v);

  std::string  GLtextureToString     (GLenum     v); // GL_TEXTUREi or 0xaaaa
  std::string  GLmodeToString        (GLenum     v); // GL_PRIMITIVE or 0xaaaa

  const char * GLpathCommandToString (GLubyte    v);                 // glPathCommandsNV etc
  std::string  GLpathCommandToString (GLuint num, const GLubyte *v); // glPathCommandsNV etc

  const char * GLpathCoordToString  (GLenum     v);                        // glPathCommandsNV etc
  std::string  GLpathCoordToString  (GLuint num, GLenum t, const void *v); // glPathCommandsNV etc

  // Bitfield strings

  std::string GLblitFramebufferToString (GLbitfield v);
  std::string GLbufferAccessToString    (GLbitfield v);
  std::string GLbufferStorageToString   (GLbitfield v);
  std::string GLclearToString           (GLbitfield v);
  std::string GLclientWaitSyncToString  (GLbitfield v);
  std::string GLfenceSyncToString       (GLbitfield v);
  std::string GLmapBufferRangeToString  (GLbitfield v);
  std::string GLmemoryBarrierToString   (GLbitfield v);
  std::string GLpushAttribToString      (GLbitfield v);
  std::string GLpushClientAttribToString(GLbitfield v);
  std::string GLsampleMaskiToString     (GLbitfield v);
  std::string GLuseProgramStagesToString(GLbitfield v);
  std::string GLwaitSyncToString        (GLbitfield v);

  std::string GLcreateSyncFromCLeventARBToString(GLbitfield v);

  std::string GLimportSyncEXTToString(GLbitfield v);

  std::string GLgetPathMetricsNVToString(GLbitfield v);
  std::string GLpathGlyphsNVToString    (GLbitfield v);

  std::string GLtexStorageSparseAMDToString(GLbitfield v);

  std::string GLmapTexture2DINTELToString(GLbitfield v);

  std::string GLstartTilingQCOMToString(GLbitfield v);

  std::string GLTexParameterToString(GLenum pname, const GLfloat  param );
  std::string GLTexParameterToString(GLenum pname, const GLint    param );
  std::string GLTexParameterToString(GLenum pname, const GLfloat *params);
  std::string GLTexParameterToString(GLenum pname, const GLint   *params);
  std::string GLTexParameterToString(GLenum pname, const GLuint  *params);

  #if REGAL_SYS_GLX
  const char * GLXenumToString       (int        v);
  #endif

  #if REGAL_SYS_EGL
  const char * EGLenumToString       (int        v);
  #endif

  inline const char *toString(const GLenum    v) { return GLenumToString(v);    }
  inline const char *toString(const GLboolean v) { return GLbooleanToString(v); }
}

REGAL_NAMESPACE_END

#endif
