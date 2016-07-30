//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSURLConnectionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate>
{
    struct RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate> m_connectionDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHandle;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
-     // Error parsing type: @24@0:8^{SynchronousResourceHandleCFURLConnectionDelegate=^^?{atomic<int>=Ai}^{ResourceHandle}{RetainPtr<const __CFString *>=^v}}16, name: initWithConnectionDelegate:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

