//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMPingStatistics : NSObject
{
    double _packetLossRate;
    double _medianRoundtripTime;
    double _averageRoundtripTime;
    double _minRoundtripTime;
    double _maxRoundtripTime;
    double _standardDeviationRoundtripTime;
    double _sumRoundtripTimes;
    int _numPingsTransmitted;
    int _numPingsReceived;
    int _numPacketsSuccessfullySent;
}

- (void)_setStandardDeviationRoundtripTime:(double)arg1;
@property(nonatomic) double standardDeviationRoundtripTime; // @synthesize standardDeviationRoundtripTime=_standardDeviationRoundtripTime;
@property(readonly, nonatomic) int packetsSuccessfullySent; // @synthesize packetsSuccessfullySent=_numPacketsSuccessfullySent;
@property(readonly, nonatomic) int numPingsTransmitted; // @synthesize numPingsTransmitted=_numPingsTransmitted;
@property(readonly, nonatomic) int numPingsReceived; // @synthesize numPingsReceived=_numPingsReceived;
@property(readonly, nonatomic) double averageRoundtripTime; // @synthesize averageRoundtripTime=_averageRoundtripTime;
- (void)_setMinRoundtripTime:(double)arg1;
@property(nonatomic) double minRoundtripTime; // @synthesize minRoundtripTime=_minRoundtripTime;
- (void)_setMedianRoundtripTime:(double)arg1;
@property(nonatomic) double medianRoundtripTime; // @synthesize medianRoundtripTime=_medianRoundtripTime;
- (void)_setMaxRoundtripTime:(double)arg1;
@property(nonatomic) double maxRoundtripTime; // @synthesize maxRoundtripTime=_maxRoundtripTime;
- (id)description;
@property(readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
- (void)_addReceivedPacket:(double)arg1;
- (void)_addTransmittedPacket:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxRTT:(double)arg1 medianRTT:(double)arg2 avgRTT:(double)arg3 minRTT:(double)arg4 transmitted:(int)arg5 successful:(int)arg6 received:(int)arg7;

@end

