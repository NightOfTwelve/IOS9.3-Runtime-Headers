//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUAlbumListViewController, PUAlbumListViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewControllerSpec : NSObject
{
    unsigned long long _supportedInterfaceOrientations;
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
}

@property(readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // @synthesize albumListViewControllerSpec=_albumListViewControllerSpec;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)configureSessionInfo:(id)arg1;
@property(readonly, nonatomic) PUAlbumListViewController *newAlbumListViewController;

@end

