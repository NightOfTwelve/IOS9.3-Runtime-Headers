//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKCalendarEditItem, UINavigationController, UITableView;

@protocol EKCalendarEditItemDelegate <NSObject>
- (UITableView *)tableView;
- (UINavigationController *)owningNavigationController;
- (int)sectionForCalendarEditItem:(EKCalendarEditItem *)arg1;
- (void)calendarItemStartedEditing:(EKCalendarEditItem *)arg1;
@end

