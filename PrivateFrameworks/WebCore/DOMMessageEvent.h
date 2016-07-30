//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMEvent.h>

@class DOMMessagePort, NSString;
@protocol DOMEventTarget;

@interface DOMMessageEvent : DOMEvent
{
}

- (void)initMessageEvent:(id)arg1 canBubbleArg:(_Bool)arg2 cancelableArg:(_Bool)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;
@property(readonly) DOMMessagePort *messagePort;
@property(readonly) NSString *data;
@property(readonly) id <DOMEventTarget> source;
@property(readonly, copy) NSString *lastEventId;
@property(readonly, copy) NSString *origin;

@end

