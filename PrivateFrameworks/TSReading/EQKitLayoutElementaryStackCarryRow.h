//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitLayoutElementaryStackDigitRow.h>

#import <TSReading/EQKitLayoutElementaryStackRow-Protocol.h>

@class NSString;

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow>
{
    vector_2d5e04fe mCrossouts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (int)crossoutAtColumnIndex:(unsigned long long)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const vector_2d5e04fe *)arg5;

// Remaining properties
@property(readonly, nonatomic) long long alignmentShift;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long firstColumnIndex;
@property(readonly, nonatomic) double followingSpace;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool spansStack;
@property(readonly) Class superclass;

@end

