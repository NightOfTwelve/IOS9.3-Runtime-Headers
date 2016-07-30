//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

@class PFVideoAVObjectBuilder;

__attribute__((visibility("hidden")))
@interface PUVideoEditModel : PUViewModel
{
    _Bool _isSlomo;
    double _videoDuration;
    double _videoStartTime;
    double _videoEndTime;
    PFVideoAVObjectBuilder *_videoBuilder;
    struct CGSize _videoSize;
    CDStruct_e83c9415 _initialSlomoRegion;
}

@property(readonly, nonatomic) _Bool isSlomo; // @synthesize isSlomo=_isSlomo;
@property(retain, nonatomic) PFVideoAVObjectBuilder *videoBuilder; // @synthesize videoBuilder=_videoBuilder;
@property(nonatomic) CDStruct_e83c9415 initialSlomoRegion; // @synthesize initialSlomoRegion=_initialSlomoRegion;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double videoEndTime; // @synthesize videoEndTime=_videoEndTime;
@property(nonatomic) double videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isVideoValid;
@property(readonly, nonatomic) _Bool hasEdits;
@property(readonly, nonatomic) _Bool hasSlomoRegionEdits;
@property(readonly, nonatomic) _Bool hasTrimRegionEdits;
@property(readonly, nonatomic) _Bool hasDefaultSlomoRegions;
@property(readonly, nonatomic) double slomoRegionEndTime;
@property(readonly, nonatomic) double slomoRegionStartTime;
@property(readonly, nonatomic) CDStruct_e83c9415 slomoRegion;
- (id)newViewModelChange;
- (id)initWithVideoAsset:(id)arg1;
- (id)init;

@end

