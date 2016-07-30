//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem
{
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property(readonly, retain, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(readonly, retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

