//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PLPhotoScrubber, UIImage;

@protocol PLPhotoScrubberDataSource
- (UIImage *)photoScrubber:(PLPhotoScrubber *)arg1 loadImageSynchronously:(_Bool)arg2 atIndex:(long long)arg3 forLoupe:(_Bool)arg4;
- (long long)numPhotosInAlbumForPhotoScrubber:(PLPhotoScrubber *)arg1;
@end

