//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray;

@interface DNDAllowedListController : PSListController
{
    NSArray *_presetGroups;
    NSMutableArray *_usersGroups;
}

- (void).cxx_destruct;
- (void)setDisruptionGroup:(id)arg1 specifier:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)getGroupSelectionFromSpecifiers:(id)arg1;
- (id)identifierForType:(unsigned long long)arg1;

@end

