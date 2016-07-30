//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject
{
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)allSources;
+ (id)_setOfAllSources;
- (void)removeAttachmentForURL:(id)arg1;
- (_Bool)setAttachment:(id)arg1 forURL:(id)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end

