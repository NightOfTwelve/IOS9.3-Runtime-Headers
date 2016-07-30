//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject
{
    EAGLContext *_glContext;
    NSLock *_nsLock;
}

+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
@property(retain) NSLock *nsLock; // @synthesize nsLock=_nsLock;
@property(retain) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithSharegroup:(id)arg1;

@end

