//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>

@class GEOComposedWaypoint, GEORouteGenerator, NSArray, NSDate, NSString, NSTimeZone, NSTimer;
@protocol GEOTransitNamedItem, MKTransitReroutingViewDelegate;

@interface MKTransitReroutingViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse>
{
    id <MKTransitReroutingViewDelegate> _delegate;
    GEORouteGenerator *_routeGenerator;
    unsigned long long _muid;
    GEOComposedWaypoint *_origin;
    id <GEOTransitNamedItem> _stationHallStop;
    NSTimeZone *_timezone;
    NSDate *_countdownReferenceDate;
    NSTimer *_cellRefreshTimer;
    NSArray *_suggestedRoutes;
}

@property(nonatomic) __weak id <MKTransitReroutingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_refresh;
- (void)loadAlternateRoutes;
- (id)_findTimezone;
- (id)initWithRouteGenerator:(id)arg1 withMapItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

