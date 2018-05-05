//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "QMapAnimationContainerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CLLocationManager, NSArray, NSMutableArray, NSOperationQueue, NSString, QAnnotationFloor, QBaseView, QCircle, QDataChecker, QMapAnimationContainer, QOverlayFloor, QScaleView, QUserLocation, QViewRecycler, UIImageView, UILabel, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol QMapViewDataSource, QMapViewDelegate;

@interface QMapView : UIView <QMapAnimationContainerDelegate, UIGestureRecognizerDelegate, CLLocationManagerDelegate, NSCoding>
{
    NSOperationQueue *_changeRegionDelegateQueue;
    _Bool _showsUserLocation;
    _Bool _showsScale;
    _Bool _showTraffic;
    _Bool _scrollEnabled;
    _Bool _zoomEnabled;
    _Bool _keepCenterEnabled;
    _Bool _forceUpdatingHeading;
    _Bool _isChangeZoomEvent;
    _Bool _isChangeMoveEvent;
    _Bool _snapshotting;
    _Bool _userLocationViewIsCustomized;
    _Bool _allowAutomaticChangeDataSource;
    _Bool _isForeigner;
    _Bool _serverStatis;
    int _dataSourceCriticalLevel;
    long long _userTrackingMode;
    long long _internalScaleMode;
    id <QMapViewDelegate> _delegate;
    QUserLocation *_userLocation;
    QBaseView *_baseView;
    QMapAnimationContainer *_renderContainer;
    UITapGestureRecognizer *_zoomInGestureRecognizer;
    UILongPressGestureRecognizer *_oneFingerZoomGestureRecognizer;
    UITapGestureRecognizer *_zoomOutGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPinchGestureRecognizer *_zoomPinchGestureRecognizer;
    NSMutableArray *_overlayArray;
    QOverlayFloor *_overlayFloor;
    NSMutableArray *_annotationArray;
    QAnnotationFloor *_annotationFloor;
    QViewRecycler *_recycler;
    CLLocationManager *_locationManager;
    QCircle *_userLocationCircle;
    UIImageView *_logoImageView;
    UILabel *_checkLabel;
    QScaleView *_scaleView;
    id <QMapViewDataSource> _mapSource;
    QDataChecker *_dataChecker;
    struct CGSize _lastBoundsSize;
}

@property(nonatomic) _Bool serverStatis; // @synthesize serverStatis=_serverStatis;
@property(retain, nonatomic) QDataChecker *dataChecker; // @synthesize dataChecker=_dataChecker;
@property(nonatomic) _Bool isForeigner; // @synthesize isForeigner=_isForeigner;
@property(nonatomic) struct CGSize lastBoundsSize; // @synthesize lastBoundsSize=_lastBoundsSize;
@property(nonatomic) int dataSourceCriticalLevel; // @synthesize dataSourceCriticalLevel=_dataSourceCriticalLevel;
@property(nonatomic) __weak id <QMapViewDataSource> mapSource; // @synthesize mapSource=_mapSource;
@property(nonatomic) _Bool allowAutomaticChangeDataSource; // @synthesize allowAutomaticChangeDataSource=_allowAutomaticChangeDataSource;
@property(retain, nonatomic) QScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) _Bool userLocationViewIsCustomized; // @synthesize userLocationViewIsCustomized=_userLocationViewIsCustomized;
@property(retain, nonatomic) QCircle *userLocationCircle; // @synthesize userLocationCircle=_userLocationCircle;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) QViewRecycler *recycler; // @synthesize recycler=_recycler;
@property(retain, nonatomic) QAnnotationFloor *annotationFloor; // @synthesize annotationFloor=_annotationFloor;
@property(retain, nonatomic) NSMutableArray *annotationArray; // @synthesize annotationArray=_annotationArray;
@property(retain, nonatomic) QOverlayFloor *overlayFloor; // @synthesize overlayFloor=_overlayFloor;
@property(retain, nonatomic) NSMutableArray *overlayArray; // @synthesize overlayArray=_overlayArray;
@property(retain, nonatomic) UIPinchGestureRecognizer *zoomPinchGestureRecognizer; // @synthesize zoomPinchGestureRecognizer=_zoomPinchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *zoomOutGestureRecognizer; // @synthesize zoomOutGestureRecognizer=_zoomOutGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *oneFingerZoomGestureRecognizer; // @synthesize oneFingerZoomGestureRecognizer=_oneFingerZoomGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *zoomInGestureRecognizer; // @synthesize zoomInGestureRecognizer=_zoomInGestureRecognizer;
@property _Bool snapshotting; // @synthesize snapshotting=_snapshotting;
@property(retain, nonatomic) QMapAnimationContainer *renderContainer; // @synthesize renderContainer=_renderContainer;
@property(retain, nonatomic) QBaseView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) _Bool isChangeMoveEvent; // @synthesize isChangeMoveEvent=_isChangeMoveEvent;
@property(nonatomic) _Bool isChangeZoomEvent; // @synthesize isChangeZoomEvent=_isChangeZoomEvent;
@property(nonatomic) _Bool forceUpdatingHeading; // @synthesize forceUpdatingHeading=_forceUpdatingHeading;
@property(retain, nonatomic) QUserLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(nonatomic, getter=isKeepCenterEnabled) _Bool keepCenterEnabled; // @synthesize keepCenterEnabled=_keepCenterEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isShowTraffic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) __weak id <QMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long internalScaleMode; // @synthesize internalScaleMode=_internalScaleMode;
@property(nonatomic) _Bool showsScale; // @synthesize showsScale=_showsScale;
@property(nonatomic) long long userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(nonatomic, getter=isShowsUserLocation) _Bool showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleLoadingErrorNotification:(id)arg1;
@property(nonatomic) _Bool automaticChangeDataSource;
- (void)setDisplayLauguage:(unsigned long long)arg1;
- (void)setupConfig:(id)arg1;
- (void)setupDataSourceRestriction;
- (void)setupNotification;
- (void)setupDefaultMapRect;
- (void)setupScaleView;
- (void)setupLogo;
- (id)cropImage:(id)arg1;
- (void)setupUserLocationSystem;
- (void)setupAnnotationSystem;
- (void)setupOverlaySystem;
- (void)setupRegionChangeQueue;
- (void)setupGestureRecognizers;
- (void)checkAndUpdateDataVersion;
- (void)setupRenderContainer;
- (void)setupBaseView;
- (void)setupSelf;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sendingStatisticsInformation;
- (id)checkKeyFailedLabel;
- (void)dealAutomaticChangeDataSource;
- (void)updateMapSourceType:(unsigned long long)arg1;
- (_Bool)chinaContainsCoordinate:(struct CLLocationCoordinate2D)arg1 andRect:(CDStruct_02837cd9)arg2;
- (_Bool)mainlandContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) double distanceFilter;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;
- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
- (void)notifyDelegateUpdateUserLocation:(id)arg1 updatingLocation:(_Bool)arg2;
- (void)diveFitsTracking;
- (void)addUserLocationInterface;
- (void)updateUserLocationInterface;
- (_Bool)userLocationInterfaceExisted;
- (void)removeAngleIndicator;
- (void)removeUserLocationView;
- (void)resetUserLocationHeading;
- (void)decreaseUserTrackingMode;
- (id)correctLocation:(id)arg1;
- (_Bool)isAuthorizedToUseLocationServices;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
@property(readonly, nonatomic) struct CGRect annotationVisibleRect;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (id)viewForAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)updateReusingPool;
- (id)doAddAnnotation:(id)arg1;
- (id)defaultUserLocationCircleView;
- (id)defaultUserLocationView;
- (id)defaultAnnotationViewWithAnnotation:(id)arg1;
- (_Bool)isVisibleForAnnotation:(id)arg1;
- (struct CGRect)annotationValidRect;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleOneFingerZoom:(id)arg1;
- (void)handleZoomOut:(id)arg1;
- (void)handleZoomIn:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)makeSickEnabled:(_Bool)arg1;
@property(nonatomic) unsigned long long mapType;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
@property(nonatomic) CDStruct_b7cb895d region;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
@property(nonatomic) double zoomLevel;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (double)zoomScale;
@property(readonly, nonatomic) double minZoomLevel;
@property(readonly, nonatomic) double maxZoomLevel;
- (double)priorZoomLevel;
- (double)nextZoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)jumpToZoomLevel:(double)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)jumpToCenterMapPoint:(CDStruct_c3b9c2ee)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)jumpToZoomLevel:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)contentOffsetForZoomScale:(double)arg1 withCenterMapPoint:(CDStruct_c3b9c2ee)arg2;
- (double)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (void)internalSetMapPoint:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)internalSetZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)internalSetMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (void)internalSetMapPoint:(CDStruct_c3b9c2ee)arg1 animated:(_Bool)arg2;
- (CDStruct_02837cd9)mapRectThatFitsZoomScale:(double)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_02837cd9)mapRectThatFitsZoomScale:(double)arg1 atPivot:(struct CGPoint)arg2;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (void)updateScaleViewForZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)hideScaleView;
- (void)internalHideScaleView;
- (void)displayScaleView;
- (void)updateScaleViewForZoomLevel:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)updateScaleViewForScaleMode:(long long)arg1;
- (unsigned long long)scaleViewAutoresizingMaskForScaleMode:(long long)arg1;
- (struct CGPoint)scaleViewOriginPositionForScaleMode:(long long)arg1;
- (double)metersPerPointForZoomLevel:(double)arg1;
- (double)metersPerPointForCurrentZoomLevel;
- (double)calculateDistanceInMetersForZoomLevel:(double)arg1;
- (id)viewForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)completeRegionChangeEventByZoom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)registerRegionChangeEventByZoom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)notifyDelegateRegionDidChangeAnimated:(_Bool)arg1;
- (void)notifyDelegateRegionWillChangeAnimated:(_Bool)arg1;
- (void)notifyDelegateDidFailLoadingWithError:(id)arg1;
- (void)animationContainerDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)animationContainerWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)animationContainerDidEndScrollingAnimation:(id)arg1;
- (void)animationContainerDidEndDecelerating:(id)arg1;
- (void)animationContainerWillBeginDecelerating:(id)arg1;
- (void)animationContainerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)animationContainerWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)animationContainerWillBeginDragging:(id)arg1;
- (void)animationContainerDidZoom:(id)arg1;
- (void)animationContainerDidScroll:(id)arg1;
- (void)annotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)annotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)didDeselectAnnotationView:(id)arg1;
- (void)didSelectAnnotationView:(id)arg1;
- (CDStruct_02837cd9)QMapRectFromCGRect:(struct CGRect)arg1;
- (struct CGRect)CGRectFromQMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)QMapPointFromCGPoint:(struct CGPoint)arg1;
- (struct CGPoint)CGPointFromQMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_b7cb895d)regionFromRect:(struct CGRect)arg1;
- (struct CGRect)rectFromRegion:(CDStruct_b7cb895d)arg1;
- (struct CGRect)rectFromMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectFromRect:(struct CGRect)arg1;
- (struct CGPoint)pointFromCoordinate:(struct CLLocationCoordinate2D)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (struct CLLocationCoordinate2D)coordinateFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CGPoint)pointFromMapPoint:(CDStruct_c3b9c2ee)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (CDStruct_c3b9c2ee)mapPointFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromMapPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGAffineTransform)level20Transform;
- (double)ratioCurrentTo20Double;
- (double)ratio20ToCurrent;
- (double)animationDurationOfContainerBoundsProperty;
- (id)container;
- (void)setCountryCode:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)setAutoChangeDataSourceLevel:(double)arg1;
@property(nonatomic) __weak id <QMapViewDataSource> dataSource;
@property(nonatomic) long long scaleMode;
- (void)takeSnapshotInRect:(struct CGRect)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)takeSnapshotInRect:(struct CGRect)arg1;
- (id)takeSnapshot;
- (void)fixDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

