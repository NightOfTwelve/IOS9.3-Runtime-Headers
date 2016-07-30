//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class EKParticipant, EKRequestAvailabilityOperation, EKUILocationEditItemCell, NSArray, NSString, UITableViewCell, UIView;

__attribute__((visibility("hidden")))
@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem>
{
    UITableViewCell *_titleCell;
    UITableViewCell *_nonConferenceLocationCell;
    EKUILocationEditItemCell *_conferenceLocationCell;
    UITableViewCell *_mapCell;
    _Bool _sourceSupportsAvailabilityRequests;
    UIView *_clearButtonView;
    EKRequestAvailabilityOperation *_availabilityRequest;
    NSArray *_availabilitySpansForLocation;
    EKParticipant *_conferenceRoom;
    long long _conferenceRoomAvailabilityType;
    _Bool _showsLocation;
    long long _mostRecentStringLengthDelta;
}

- (void).cxx_destruct;
- (_Bool)_showConferenceLocationCell;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)_clearButtonTapped;
- (void)_updateAvailabilityInformation;
- (id)_clearButtonView;
- (void)_refreshConferenceRoomCell;
- (void)_setNewStructuredLocation:(id)arg1;
- (void)_updateLocationWithConferenceRoom:(id)arg1;
- (void)_updateLocationWithStructuredLocation:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isSaveable;
- (id)_makeCell:(unsigned long long)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (_Bool)isInline;
- (_Bool)_showsMap;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)refreshFromCalendarItemAndStore;
- (void)dealloc;
- (id)initWithLocation:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

