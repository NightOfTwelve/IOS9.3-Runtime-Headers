//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOABExperimentResponse, NSString;
@protocol GEOExperimentServerProxyDelegate;

@protocol GEOExperimentServerProxy <NSObject>
@property(readonly, nonatomic) GEOABExperimentResponse *experimentsInfo;
@property(nonatomic) id <GEOExperimentServerProxyDelegate> delegate;
- (void)_debug_setQuerySubstring:(NSString *)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)forceUpdate;
- (id)initWithDelegate:(id <GEOExperimentServerProxyDelegate>)arg1;
@end
