//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

@interface MCDSectionedTableViewController : MCD_OLD_TableViewController
{
    unsigned long long *_offsetOfSection;
}

- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)rowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool isSectioning;
@property(readonly, nonatomic) unsigned long long countOfActions;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

