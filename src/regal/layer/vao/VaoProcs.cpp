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
#include "Vao.h"
#include "VaoProcs.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

using namespace Emu;

static void REGAL_CALL vao_glBindBuffer(Layer *_layer, GLenum target, GLuint buffer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  _context->vao->ShadowBufferBinding( target, buffer );

  RglBindBuffer( orig, target, buffer );

}

static void REGAL_CALL vao_glBindBufferARB(Layer *_layer, GLenum target, GLuint buffer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  _context->vao->ShadowBufferBinding( target, buffer );

  RglBindBufferARB( orig, target, buffer );

}

static void REGAL_CALL vao_glBindVertexArray(Layer *_layer, GLuint array)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->BindVertexArray(*_context, array ); return;

  RglBindVertexArray( orig, array );

}

static void REGAL_CALL vao_glClientActiveTexture(Layer *_layer, GLenum texture)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  _context->vao->ClientActiveTexture(*_context, texture );

  RglClientActiveTexture( orig, texture );

}

static void REGAL_CALL vao_glClientActiveTextureARB(Layer *_layer, GLenum texture)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  _context->vao->ClientActiveTexture(*_context, texture );

  RglClientActiveTextureARB( orig, texture );

}

static void REGAL_CALL vao_glColorPointer(Layer *_layer, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->ColorPointer(*_context, size, type, stride, pointer ); return;

  RglColorPointer( orig, size, type, stride, pointer );

}

static void REGAL_CALL vao_glColorPointerEXT(Layer *_layer, GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->ColorPointer(*_context, size, type, stride, pointer ); return;

  RglColorPointerEXT( orig, size, type, stride, count, pointer );

}

static void REGAL_CALL vao_glDeleteVertexArrays(Layer *_layer, GLsizei n, const GLuint *arrays)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->DeleteVertexArrays( n, arrays ); return;

  RglDeleteVertexArrays( orig, n, arrays );

}

static void REGAL_CALL vao_glDisableClientState(Layer *_layer, GLenum cap)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->DisableClientState(*_context, cap ); return;

  RglDisableClientState( orig, cap );

}

static void REGAL_CALL vao_glDisableVertexAttribArray(Layer *_layer, GLuint index)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->DisableVertexAttribArray(*_context, index );

  RglDisableVertexAttribArray( orig, index );

}

static void REGAL_CALL vao_glDisableVertexAttribArrayARB(Layer *_layer, GLuint index)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->DisableVertexAttribArray(*_context, index );

  RglDisableVertexAttribArrayARB( orig, index );

}

static void REGAL_CALL vao_glDrawArrays(Layer *_layer, GLenum mode, GLint first, GLsizei count)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArrays( orig, mode, first, count );

}

static void REGAL_CALL vao_glDrawArraysEXT(Layer *_layer, GLenum mode, GLint first, GLsizei count)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArraysEXT( orig, mode, first, count );

}

static void REGAL_CALL vao_glDrawArraysIndirect(Layer *_layer, GLenum mode, const GLvoid *indirect)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArraysIndirect( orig, mode, indirect );

}

static void REGAL_CALL vao_glDrawArraysInstanced(Layer *_layer, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArraysInstanced( orig, mode, start, count, primcount );

}

static void REGAL_CALL vao_glDrawArraysInstancedARB(Layer *_layer, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArraysInstancedARB( orig, mode, start, count, primcount );

}

static void REGAL_CALL vao_glDrawArraysInstancedEXT(Layer *_layer, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawArraysInstancedEXT( orig, mode, start, count, primcount );

}

static void REGAL_CALL vao_glDrawElementArrayAPPLE(Layer *_layer, GLenum mode, GLint first, GLsizei count)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementArrayAPPLE( orig, mode, first, count );

}

static void REGAL_CALL vao_glDrawElementArrayATI(Layer *_layer, GLenum mode, GLsizei count)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementArrayATI( orig, mode, count );

}

static void REGAL_CALL vao_glDrawElements(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElements( orig, mode, count, type, indices );

}

static void REGAL_CALL vao_glDrawElementsBaseVertex(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsBaseVertex( orig, mode, count, type, indices, basevertex );

}

static void REGAL_CALL vao_glDrawElementsIndirect(Layer *_layer, GLenum mode, GLenum type, const GLvoid *indirect)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsIndirect( orig, mode, type, indirect );

}

static void REGAL_CALL vao_glDrawElementsInstanced(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsInstanced( orig, mode, count, type, indices, primcount );

}

static void REGAL_CALL vao_glDrawElementsInstancedARB(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsInstancedARB( orig, mode, count, type, indices, primcount );

}

static void REGAL_CALL vao_glDrawElementsInstancedBaseVertex(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsInstancedBaseVertex( orig, mode, count, type, indices, primcount, basevertex );

}

static void REGAL_CALL vao_glDrawElementsInstancedEXT(Layer *_layer, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglDrawElementsInstancedEXT( orig, mode, count, type, indices, primcount );

}

static void REGAL_CALL vao_glEnableClientState(Layer *_layer, GLenum cap)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->EnableClientState(*_context, cap ); return;

  RglEnableClientState( orig, cap );

}

static void REGAL_CALL vao_glEnableVertexAttribArray(Layer *_layer, GLuint index)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->EnableVertexAttribArray(*_context, index );

  RglEnableVertexAttribArray( orig, index );

}

static void REGAL_CALL vao_glEnableVertexAttribArrayARB(Layer *_layer, GLuint index)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->EnableVertexAttribArray(*_context, index );

  RglEnableVertexAttribArrayARB( orig, index );

}

static void REGAL_CALL vao_glFogCoordPointer(Layer *_layer, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->FogCoordPointer(*_context, type, stride, pointer ); return;

  RglFogCoordPointer( orig, type, stride, pointer );

}

static void REGAL_CALL vao_glFogCoordPointerEXT(Layer *_layer, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->FogCoordPointer(*_context, type, stride, pointer ); return;

  RglFogCoordPointerEXT( orig, type, stride, pointer );

}

static void REGAL_CALL vao_glGenVertexArrays(Layer *_layer, GLsizei n, GLuint *arrays)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GenVertexArrays( n, arrays ); return;

  RglGenVertexArrays( orig, n, arrays );

}

static void REGAL_CALL vao_glGetBooleanv(Layer *_layer, GLenum pname, GLboolean *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  if( _context->vao->Get( pname, params ) ) {
    return;
  }

  RglGetBooleanv( orig, pname, params );

}

static void REGAL_CALL vao_glGetDoublev(Layer *_layer, GLenum pname, GLdouble *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  if( _context->vao->Get( pname, params ) ) {
    return;
  }

  RglGetDoublev( orig, pname, params );

}

static void REGAL_CALL vao_glGetFloatv(Layer *_layer, GLenum pname, GLfloat *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  if( _context->vao->Get( pname, params ) ) {
    return;
  }

  RglGetFloatv( orig, pname, params );

}

static void REGAL_CALL vao_glGetInteger64v(Layer *_layer, GLenum pname, GLint64 *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  if( _context->vao->Get( pname, params ) ) {
    return;
  }

  RglGetInteger64v( orig, pname, params );

}

static void REGAL_CALL vao_glGetIntegerv(Layer *_layer, GLenum pname, GLint *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  if( _context->vao->Get( pname, params ) ) {
    return;
  }

  RglGetIntegerv( orig, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribPointerv(Layer *_layer, GLuint index, GLenum pname, GLvoid **pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, pointer ); return;

  RglGetVertexAttribPointerv( orig, index, pname, pointer );

}

static void REGAL_CALL vao_glGetVertexAttribPointervARB(Layer *_layer, GLuint index, GLenum pname, GLvoid **pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, pointer ); return;

  RglGetVertexAttribPointervARB( orig, index, pname, pointer );

}

static void REGAL_CALL vao_glGetVertexAttribdv(Layer *_layer, GLuint index, GLenum pname, GLdouble *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribdv( orig, index, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribdvARB(Layer *_layer, GLuint index, GLenum pname, GLdouble *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribdvARB( orig, index, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribfv(Layer *_layer, GLuint index, GLenum pname, GLfloat *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribfv( orig, index, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribfvARB(Layer *_layer, GLuint index, GLenum pname, GLfloat *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribfvARB( orig, index, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribiv(Layer *_layer, GLuint index, GLenum pname, GLint *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribiv( orig, index, pname, params );

}

static void REGAL_CALL vao_glGetVertexAttribivARB(Layer *_layer, GLuint index, GLenum pname, GLint *params)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->GetAttrib( index, pname, params ); return;

  RglGetVertexAttribivARB( orig, index, pname, params );

}

static void REGAL_CALL vao_glInterleavedArrays(Layer *_layer, GLenum format, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->InterleavedArrays(*_context, format, stride, pointer ); return;

  RglInterleavedArrays( orig, format, stride, pointer );

}

static GLboolean REGAL_CALL vao_glIsVertexArray(Layer *_layer, GLuint array)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->IsVertexArray( array );

  return RglIsVertexArray( orig, array );

}

static void REGAL_CALL vao_glMultiDrawArrays(Layer *_layer, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawArrays( orig, mode, first, count, primcount );

}

static void REGAL_CALL vao_glMultiDrawArraysEXT(Layer *_layer, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawArraysEXT( orig, mode, first, count, primcount );

}

static void REGAL_CALL vao_glMultiDrawArraysIndirect(Layer *_layer, GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawArraysIndirect( orig, mode, indirect, primcount, stride );

}

static void REGAL_CALL vao_glMultiDrawArraysIndirectAMD(Layer *_layer, GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawArraysIndirectAMD( orig, mode, indirect, primcount, stride );

}

static void REGAL_CALL vao_glMultiDrawElementArrayAPPLE(Layer *_layer, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElementArrayAPPLE( orig, mode, first, count, primcount );

}

static void REGAL_CALL vao_glMultiDrawElements(Layer *_layer, GLenum mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElements( orig, mode, count, type, indices, primcount );

}

static void REGAL_CALL vao_glMultiDrawElementsBaseVertex(Layer *_layer, GLenum mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount, const GLint *basevertex)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElementsBaseVertex( orig, mode, count, type, indices, primcount, basevertex );

}

static void REGAL_CALL vao_glMultiDrawElementsEXT(Layer *_layer, GLenum mode, const GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElementsEXT( orig, mode, count, type, indices, primcount );

}

static void REGAL_CALL vao_glMultiDrawElementsIndirect(Layer *_layer, GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElementsIndirect( orig, mode, type, indirect, primcount, stride );

}

static void REGAL_CALL vao_glMultiDrawElementsIndirectAMD(Layer *_layer, GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // prefix
  // _context->vao->Validate(*_context );

  RglMultiDrawElementsIndirectAMD( orig, mode, type, indirect, primcount, stride );

}

static void REGAL_CALL vao_glNormalPointer(Layer *_layer, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->NormalPointer(*_context, type, stride, pointer ); return;

  RglNormalPointer( orig, type, stride, pointer );

}

static void REGAL_CALL vao_glNormalPointerEXT(Layer *_layer, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->NormalPointer(*_context, type, stride, pointer ); return;

  RglNormalPointerEXT( orig, type, stride, count, pointer );

}

static void REGAL_CALL vao_glSecondaryColorPointer(Layer *_layer, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->SecondaryColorPointer(*_context, size, type, stride, pointer ); return;

  RglSecondaryColorPointer( orig, size, type, stride, pointer );

}

static void REGAL_CALL vao_glSecondaryColorPointerEXT(Layer *_layer, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->SecondaryColorPointer(*_context, size, type, stride, pointer ); return;

  RglSecondaryColorPointerEXT( orig, size, type, stride, pointer );

}

static void REGAL_CALL vao_glTexCoordPointer(Layer *_layer, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->TexCoordPointer(*_context, size, type, stride, pointer ); return;

  RglTexCoordPointer( orig, size, type, stride, pointer );

}

static void REGAL_CALL vao_glTexCoordPointerEXT(Layer *_layer, GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->TexCoordPointer(*_context, size, type, stride, pointer ); return;

  RglTexCoordPointerEXT( orig, size, type, stride, count, pointer );

}

static void REGAL_CALL vao_glVertexAttribPointer(Layer *_layer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->AttribPointer(*_context, index, size, type, normalized, stride, pointer );

  RglVertexAttribPointer( orig, index, size, type, normalized, stride, pointer );

}

static void REGAL_CALL vao_glVertexAttribPointerARB(Layer *_layer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  return _context->vao->AttribPointer(*_context, index, size, type, normalized, stride, pointer );

  RglVertexAttribPointerARB( orig, index, size, type, normalized, stride, pointer );

}

static void REGAL_CALL vao_glVertexPointer(Layer *_layer, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->VertexPointer(*_context, size, type, stride, pointer ); return;

  RglVertexPointer( orig, size, type, stride, pointer );

}

static void REGAL_CALL vao_glVertexPointerEXT(Layer *_layer, GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
  Vao * self = static_cast<Vao *>(_layer);

  VaoOriginate & orig = self->orig;

  // impl
  _context->vao->VertexPointer(*_context, size, type, stride, pointer ); return;

  RglVertexPointerEXT( orig, size, type, stride, count, pointer );

}

void VaoIntercept( Layer *layer, Dispatch::GL & dt ) {
  dt.glBindBuffer                      = MakeRegalProc(vao_glBindBuffer, layer);
  dt.glBindBufferARB                   = MakeRegalProc(vao_glBindBufferARB, layer);
  dt.glBindVertexArray                 = MakeRegalProc(vao_glBindVertexArray, layer);
  dt.glClientActiveTexture             = MakeRegalProc(vao_glClientActiveTexture, layer);
  dt.glClientActiveTextureARB          = MakeRegalProc(vao_glClientActiveTextureARB, layer);
  dt.glColorPointer                    = MakeRegalProc(vao_glColorPointer, layer);
  dt.glColorPointerEXT                 = MakeRegalProc(vao_glColorPointerEXT, layer);
  dt.glDeleteVertexArrays              = MakeRegalProc(vao_glDeleteVertexArrays, layer);
  dt.glDisableClientState              = MakeRegalProc(vao_glDisableClientState, layer);
  dt.glDisableVertexAttribArray        = MakeRegalProc(vao_glDisableVertexAttribArray, layer);
  dt.glDisableVertexAttribArrayARB     = MakeRegalProc(vao_glDisableVertexAttribArrayARB, layer);
  dt.glDrawArrays                      = MakeRegalProc(vao_glDrawArrays, layer);
  dt.glDrawArraysEXT                   = MakeRegalProc(vao_glDrawArraysEXT, layer);
  dt.glDrawArraysIndirect              = MakeRegalProc(vao_glDrawArraysIndirect, layer);
  dt.glDrawArraysInstanced             = MakeRegalProc(vao_glDrawArraysInstanced, layer);
  dt.glDrawArraysInstancedARB          = MakeRegalProc(vao_glDrawArraysInstancedARB, layer);
  dt.glDrawArraysInstancedEXT          = MakeRegalProc(vao_glDrawArraysInstancedEXT, layer);
  dt.glDrawElementArrayAPPLE           = MakeRegalProc(vao_glDrawElementArrayAPPLE, layer);
  dt.glDrawElementArrayATI             = MakeRegalProc(vao_glDrawElementArrayATI, layer);
  dt.glDrawElements                    = MakeRegalProc(vao_glDrawElements, layer);
  dt.glDrawElementsBaseVertex          = MakeRegalProc(vao_glDrawElementsBaseVertex, layer);
  dt.glDrawElementsIndirect            = MakeRegalProc(vao_glDrawElementsIndirect, layer);
  dt.glDrawElementsInstanced           = MakeRegalProc(vao_glDrawElementsInstanced, layer);
  dt.glDrawElementsInstancedARB        = MakeRegalProc(vao_glDrawElementsInstancedARB, layer);
  dt.glDrawElementsInstancedBaseVertex = MakeRegalProc(vao_glDrawElementsInstancedBaseVertex, layer);
  dt.glDrawElementsInstancedEXT        = MakeRegalProc(vao_glDrawElementsInstancedEXT, layer);
  dt.glEnableClientState               = MakeRegalProc(vao_glEnableClientState, layer);
  dt.glEnableVertexAttribArray         = MakeRegalProc(vao_glEnableVertexAttribArray, layer);
  dt.glEnableVertexAttribArrayARB      = MakeRegalProc(vao_glEnableVertexAttribArrayARB, layer);
  dt.glFogCoordPointer                 = MakeRegalProc(vao_glFogCoordPointer, layer);
  dt.glFogCoordPointerEXT              = MakeRegalProc(vao_glFogCoordPointerEXT, layer);
  dt.glGenVertexArrays                 = MakeRegalProc(vao_glGenVertexArrays, layer);
  dt.glGetBooleanv                     = MakeRegalProc(vao_glGetBooleanv, layer);
  dt.glGetDoublev                      = MakeRegalProc(vao_glGetDoublev, layer);
  dt.glGetFloatv                       = MakeRegalProc(vao_glGetFloatv, layer);
  dt.glGetInteger64v                   = MakeRegalProc(vao_glGetInteger64v, layer);
  dt.glGetIntegerv                     = MakeRegalProc(vao_glGetIntegerv, layer);
  dt.glGetVertexAttribPointerv         = MakeRegalProc(vao_glGetVertexAttribPointerv, layer);
  dt.glGetVertexAttribPointervARB      = MakeRegalProc(vao_glGetVertexAttribPointervARB, layer);
  dt.glGetVertexAttribdv               = MakeRegalProc(vao_glGetVertexAttribdv, layer);
  dt.glGetVertexAttribdvARB            = MakeRegalProc(vao_glGetVertexAttribdvARB, layer);
  dt.glGetVertexAttribfv               = MakeRegalProc(vao_glGetVertexAttribfv, layer);
  dt.glGetVertexAttribfvARB            = MakeRegalProc(vao_glGetVertexAttribfvARB, layer);
  dt.glGetVertexAttribiv               = MakeRegalProc(vao_glGetVertexAttribiv, layer);
  dt.glGetVertexAttribivARB            = MakeRegalProc(vao_glGetVertexAttribivARB, layer);
  dt.glInterleavedArrays               = MakeRegalProc(vao_glInterleavedArrays, layer);
  dt.glIsVertexArray                   = MakeRegalProc(vao_glIsVertexArray, layer);
  dt.glMultiDrawArrays                 = MakeRegalProc(vao_glMultiDrawArrays, layer);
  dt.glMultiDrawArraysEXT              = MakeRegalProc(vao_glMultiDrawArraysEXT, layer);
  dt.glMultiDrawArraysIndirect         = MakeRegalProc(vao_glMultiDrawArraysIndirect, layer);
  dt.glMultiDrawArraysIndirectAMD      = MakeRegalProc(vao_glMultiDrawArraysIndirectAMD, layer);
  dt.glMultiDrawElementArrayAPPLE      = MakeRegalProc(vao_glMultiDrawElementArrayAPPLE, layer);
  dt.glMultiDrawElements               = MakeRegalProc(vao_glMultiDrawElements, layer);
  dt.glMultiDrawElementsBaseVertex     = MakeRegalProc(vao_glMultiDrawElementsBaseVertex, layer);
  dt.glMultiDrawElementsEXT            = MakeRegalProc(vao_glMultiDrawElementsEXT, layer);
  dt.glMultiDrawElementsIndirect       = MakeRegalProc(vao_glMultiDrawElementsIndirect, layer);
  dt.glMultiDrawElementsIndirectAMD    = MakeRegalProc(vao_glMultiDrawElementsIndirectAMD, layer);
  dt.glNormalPointer                   = MakeRegalProc(vao_glNormalPointer, layer);
  dt.glNormalPointerEXT                = MakeRegalProc(vao_glNormalPointerEXT, layer);
  dt.glSecondaryColorPointer           = MakeRegalProc(vao_glSecondaryColorPointer, layer);
  dt.glSecondaryColorPointerEXT        = MakeRegalProc(vao_glSecondaryColorPointerEXT, layer);
  dt.glTexCoordPointer                 = MakeRegalProc(vao_glTexCoordPointer, layer);
  dt.glTexCoordPointerEXT              = MakeRegalProc(vao_glTexCoordPointerEXT, layer);
  dt.glVertexAttribPointer             = MakeRegalProc(vao_glVertexAttribPointer, layer);
  dt.glVertexAttribPointerARB          = MakeRegalProc(vao_glVertexAttribPointerARB, layer);
  dt.glVertexPointer                   = MakeRegalProc(vao_glVertexPointer, layer);
  dt.glVertexPointerEXT                = MakeRegalProc(vao_glVertexPointerEXT, layer);
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
