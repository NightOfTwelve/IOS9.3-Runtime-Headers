//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSTCellIterator;
@protocol TSTCellRangeIteratorDelegate;

__attribute__((visibility("hidden")))
@interface TSTCellRangeIterator : NSObject
{
    TSTCellIterator *mCellIterator;
    CDStruct_febb2249 mIterData;
    _Bool mIterDataValid;
    _Bool mCellValidForDelegate;
    id <TSTCellRangeIteratorDelegate> mDelegate;
}

- (_Bool)processRange;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1 delegate:(id)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3;
- (id)initWithTableModel:(id)arg1 range:(struct TSUColumnRowRect)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) _Bool cellValid;

@end

