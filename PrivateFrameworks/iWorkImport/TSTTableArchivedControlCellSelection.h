//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTTableControlCellSelection;

__attribute__((visibility("hidden")))
@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection>
{
    TSTTableControlCellSelection *mControlCellSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mControlCellSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

