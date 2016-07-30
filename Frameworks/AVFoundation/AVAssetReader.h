//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReaderInternal, NSArray, NSError;

@interface AVAssetReader : NSObject
{
    AVAssetReaderInternal *_priv;
}

+ (id)_errorForOSStatus:(int)arg1;
+ (id)assetReaderWithAsset:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(readonly, nonatomic, getter=_figAssetReader) struct OpaqueFigAssetReader *figAssetReader;
- (void)cancelReading;
- (_Bool)startReading;
- (void)_outputDidFinish:(id)arg1;
- (void)addOutput:(id)arg1;
- (_Bool)canAddOutput:(id)arg1;
- (_Bool)_canAddOutput:(id)arg1 exceptionReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
@property(nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly) NSError *error;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;
@property(readonly) long long status;
@property(readonly, retain, nonatomic) AVAsset *asset;
- (id)description;
- (void)_tearDownFigAssetReader;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 error:(id *)arg2;
- (id)init;

@end

