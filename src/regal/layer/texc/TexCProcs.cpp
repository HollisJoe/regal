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

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"
#include "TexC.h"
#include "TexCProcs.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

using namespace Emu;

static void REGAL_CALL texc_glActiveTexture(Layer *_layer, GLenum texture)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowActiveTexture( texture );

  RglActiveTexture( orig, texture );

}

static void REGAL_CALL texc_glActiveTextureARB(Layer *_layer, GLenum texture)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowActiveTexture( texture );

  RglActiveTextureARB( orig, texture );

}

static void REGAL_CALL texc_glBindTexture(Layer *_layer, GLenum target, GLuint texture)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowBindTexture( target, texture );

  RglBindTexture( orig, target, texture );

}

static void REGAL_CALL texc_glBindTextureEXT(Layer *_layer, GLenum target, GLuint texture)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowBindTexture( target, texture );

  RglBindTextureEXT( orig, target, texture );

}

static void REGAL_CALL texc_glDeleteTextures(Layer *_layer, GLsizei n, const GLuint *textures)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowDeleteTextures( n, textures );

  RglDeleteTextures( orig, n, textures );

}

static void REGAL_CALL texc_glDeleteTexturesEXT(Layer *_layer, GLsizei n, const GLuint *textures)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowDeleteTextures( n, textures );

  RglDeleteTexturesEXT( orig, n, textures );

}

static void REGAL_CALL texc_glGenTextures(Layer *_layer, GLsizei n, GLuint *textures)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // impl

  orig.glGenTextures( _context, n, textures );
  _context->texc->ShadowGenTextures( n, textures );
  return;

  RglGenTextures( orig, n, textures );

}

static void REGAL_CALL texc_glGenTexturesEXT(Layer *_layer, GLsizei n, GLuint *textures)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // impl

  orig.glGenTextures( _context, n, textures );
  _context->texc->ShadowGenTextures( n, textures );
  return;

  RglGenTexturesEXT( orig, n, textures );

}

static void REGAL_CALL texc_glGenerateMipmap(Layer *_layer, GLenum target)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowGenerateMipmap( target );

  RglGenerateMipmap( orig, target );

}

static void REGAL_CALL texc_glGenerateMipmapEXT(Layer *_layer, GLenum target)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowGenerateMipmap( target );

  RglGenerateMipmapEXT( orig, target );

}

static void REGAL_CALL texc_glPixelStorei(Layer *_layer, GLenum pname, GLint param)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowPixelStore( pname, param );

  RglPixelStorei( orig, pname, param );

}

static void REGAL_CALL texc_glTexImage2D(Layer *_layer, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // prefix
  _context->texc->ShadowTexImage2D( target, level, format, type );

  RglTexImage2D( orig, target, level, internalformat, width, height, border, format, type, pixels );

}

static void REGAL_CALL texc_glTexSubImage2D(Layer *_layer, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
  TexC * self = static_cast<TexC *>(_layer);

  TexCOriginate & orig = self->orig;

  // impl

  GLenum targetFormat;
  GLenum targetType;
  _context->texc->GetFormatAndType( target, level, &targetFormat, &targetType );
  Emu::ConvertedBuffer _buffer( _context->texc->unpackPSS, targetFormat, targetType );
  if ( _buffer.ConvertFrom( width, height, format, type, pixels ) )
  {
    if (_context->texc->unpackPSS.alignment != 4)
      orig.glPixelStorei( _context, GL_UNPACK_ALIGNMENT, 4 );
    orig.glTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, targetFormat, targetType, _buffer.Get() );
    if (_context->texc->unpackPSS.alignment != 4)
      orig.glPixelStorei( _context, GL_UNPACK_ALIGNMENT, _context->texc->unpackPSS.alignment );
  }
  else
  {
    orig.glTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, type, pixels );
  }
  return;

  RglTexSubImage2D( orig, target, level, xoffset, yoffset, width, height, format, type, pixels );

}

void TexCIntercept( Layer *layer, Dispatch::GL & dt ) {
  dt.glActiveTexture     = MakeRegalProc(texc_glActiveTexture, layer);
  dt.glActiveTextureARB  = MakeRegalProc(texc_glActiveTextureARB, layer);
  dt.glBindTexture       = MakeRegalProc(texc_glBindTexture, layer);
  dt.glBindTextureEXT    = MakeRegalProc(texc_glBindTextureEXT, layer);
  dt.glDeleteTextures    = MakeRegalProc(texc_glDeleteTextures, layer);
  dt.glDeleteTexturesEXT = MakeRegalProc(texc_glDeleteTexturesEXT, layer);
  dt.glGenTextures       = MakeRegalProc(texc_glGenTextures, layer);
  dt.glGenTexturesEXT    = MakeRegalProc(texc_glGenTexturesEXT, layer);
  dt.glGenerateMipmap    = MakeRegalProc(texc_glGenerateMipmap, layer);
  dt.glGenerateMipmapEXT = MakeRegalProc(texc_glGenerateMipmapEXT, layer);
  dt.glPixelStorei       = MakeRegalProc(texc_glPixelStorei, layer);
  dt.glTexImage2D        = MakeRegalProc(texc_glTexImage2D, layer);
  dt.glTexSubImage2D     = MakeRegalProc(texc_glTexSubImage2D, layer);
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
