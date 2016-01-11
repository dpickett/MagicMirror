//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPage, MSRenderingContext;

@interface MSTileRenderer : NSObject
{
    BOOL _shouldDrawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    BOOL _cancelled;
    MSPage *_page;
    double _backingScale;
    double _zoomValue;
    MSRenderingContext *_context;
    struct CGRect _tileRect;
    struct CGRect _dirtyRect;
}


@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
- (void)cancel;
@property(retain) MSRenderingContext *context; // @synthesize context=_context;
- (id)contextWithCGContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
- (id)init;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void)prepareContext:(struct CGContext *)arg1;
- (void)renderInContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
@property(nonatomic) BOOL shouldDrawPixelated; // @synthesize shouldDrawPixelated=_shouldDrawPixelated;
@property(nonatomic) struct CGRect tileRect; // @synthesize tileRect=_tileRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;

@end
