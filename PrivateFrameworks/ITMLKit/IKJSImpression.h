//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSImpression-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IKJSImpression : IKJSObject <IKJSImpression, JSExport>
{
    IKJSImpression *_parentImpression;
    NSString *_metricsData;
    NSMutableArray *_mutableTimestamps;
    NSMutableArray *_mutableChildren;
    long long _indexInParent;
}

@property(nonatomic) long long indexInParent; // @synthesize indexInParent=_indexInParent;
@property(retain, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(retain, nonatomic) NSMutableArray *mutableTimestamps; // @synthesize mutableTimestamps=_mutableTimestamps;
@property(copy, nonatomic) NSString *metricsData; // @synthesize metricsData=_metricsData;
@property(nonatomic) __weak IKJSImpression *parentImpression; // @synthesize parentImpression=_parentImpression;
- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addTimestamp:(long long)arg1;
- (void)linkReferences;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) id parent;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSArray *timestamps;
@property(readonly, nonatomic) NSString *data;
- (id)description;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3;

@end

