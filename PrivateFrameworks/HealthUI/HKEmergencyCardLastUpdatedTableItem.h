//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSDateFormatter, UILabel, UITableViewCell;

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    UILabel *_lastUpdatedLabel;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)separatorInset;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (_Bool)hasPresentableData;
- (id)initInEditMode:(_Bool)arg1;

@end

