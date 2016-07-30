//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/MKMapViewDelegate-Protocol.h>

@class MKLocalSearch, MKMapItem, MKMapView, NSString, _MKPlaceViewController;
@protocol MKAnnotation;

@interface CKMapViewController : UIViewController <MKMapViewDelegate>
{
    id <MKAnnotation> _annotation;
    MKMapView *_mapView;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_mapViewController;
    MKLocalSearch *_localSearch;
}

@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(retain, nonatomic) _MKPlaceViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation=_annotation;
- (void)selectPin;
- (void)_toolbarItemPressed:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)initWithAnnotation:(id)arg1;
- (_Bool)wantsFullScreenLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

