//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    EKEventDetailAttendeesListView *_attendeesListView;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_attendeesListView;
- (void)setAttendees:(id)arg1;
- (_Bool)update;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end

