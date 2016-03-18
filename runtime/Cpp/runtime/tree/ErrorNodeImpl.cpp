﻿#include "ErrorNodeImpl.h"
#include "Exceptions.h"


/*
 * [The "BSD license"]
 *  Copyright (c) 2016 Mike Lischke
 *  Copyright (c) 2013 Terence Parr
 *  Copyright (c) 2013 Dan McLaughlin
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. The name of the author may not be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 *  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
namespace org {
    namespace antlr {
        namespace v4 {
            namespace runtime {
                namespace tree {

                    ErrorNodeImpl::ErrorNodeImpl(Token *token) : TerminalNodeImpl(token) {
                    }
                    
                    // From Terminal Node
                    Token *ErrorNodeImpl::getSymbol() {
                        throw new TODOException(L"ErrorNodeImpl::getSymbol");
                    };
                    
                    // From Parse Tree
                    ParseTree *ErrorNodeImpl::getParent(){
                        throw new TODOException(L"ErrorNodeImpl::getSymbol");
                    };
                  ParseTree *ErrorNodeImpl::getChild(std::size_t i){
                        throw new TODOException(L"ErrorNodeImpl::getChild");
                    };
                    std::wstring ErrorNodeImpl::getText() {
                        throw new TODOException(L"ErrorNodeImpl::getText");
                    };
                    std::wstring ErrorNodeImpl::toStringTree(Parser *parser){
                        throw new TODOException(L"ErrorNodeImpl::toStringTree");
                    };;
                    
                    // From SyntaxTree
                    misc::Interval *ErrorNodeImpl::getSourceInterval(){
                        throw new TODOException(L"ErrorNodeImpl::getSourceInterval");
                    };;
                    
                    
                    void *ErrorNodeImpl::getPayload(){
                        throw new TODOException(L"ErrorNodeImpl::getPayload");
                    };

                  std::size_t ErrorNodeImpl::getChildCount(){
                        throw new TODOException(L"ErrorNodeImpl::getChildCount");
                    };;

                    std::wstring ErrorNodeImpl::toStringTree() {
                        throw new TODOException(L"ErrorNodeImpl::toStringTree");
                    };
                    
                }
            }
        }
    }
}
