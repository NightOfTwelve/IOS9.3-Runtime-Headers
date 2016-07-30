//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class NSMutableSet;

@interface MusicLibraryAlbumsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration
{
    NSMutableSet *_additionalQueryFilterPredicates;
    _Bool _forMainAlbumsList;
    _Bool _includeCompilations;
}

+ (void)populateHorizontalLayoutInterpolatorsOnCollectionViewDescriptor:(id)arg1;
- (void).cxx_destruct;
- (id)_detailViewControllerForAlbumPersistentID:(unsigned long long)arg1 sourceViewController:(id)arg2;
- (_Bool)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)addQueryFilterPredicate:(id)arg1;
- (id)loadEntityViewDescriptor;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)queryForAlbumsCollectionView;
- (void)dealloc;
- (id)initForMainAlbumsList:(_Bool)arg1 includeCompilations:(_Bool)arg2;
- (id)init;

@end

