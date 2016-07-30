//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEODirectionsProvider : NSObject
{
    _Bool _isLoading;
    int _requestType;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 problemDetails:(CDStruct_c55e649d *)arg3;
- (void)providerReceivedError:(id)arg1 problemDetails:(CDStruct_c55e649d *)arg2;
- (void)providerReceivedResponse:(id)arg1;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)requestCompleted;
- (void)dealloc;

@end

