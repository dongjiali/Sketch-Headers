//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIContext, MSBackgroundBlurRenderer, MSCGContextPool, MSImmutableDocumentData, MSImmutableLayer, MSStyleFillRenderer, MSStyleImageRenderer, MSStylePathRenderer, NSColor, NSColorSpace, NSDictionary, NSGraphicsContext, NSMutableArray;

@interface MSRenderingContext : NSObject
{
    BOOL _isDrawingReflection;
    BOOL _isDrawingBackgroundForBlur;
    BOOL _isBitmapBacked;
    BOOL _isExporting;
    BOOL _isDrawingPixelated;
    BOOL _isDrawingMask;
    BOOL _includeArtboardBackground;
    BOOL _contextIsVectorBacked;
    BOOL _shouldFlipShadows;
    BOOL _cancelled;
    int _internalBlendMode;
    MSBackgroundBlurRenderer *_backgroundBlurRenderer;
    CIContext *_ciContext;
    struct CGContext *_contextRef;
    unsigned long long _disableDrawingFillsCounter;
    unsigned long long _disableClippingFillsCounter;
    double _zoomLevel;
    NSColorSpace *_colorSpace;
    NSColor *_backgroundColor;
    id _rootObject;
    double _shadowScale;
    double _backingScale;
    double _parentLayerOpacity;
    MSImmutableDocumentData *_document;
    MSImmutableLayer *_untilLayer;
    id <MSRenderingContextCacheProvider> _cacheProvider;
    MSCGContextPool *_contextPool;
    MSStylePathRenderer *_stylePathRenderer;
    MSStyleImageRenderer *_styleImageRenderer;
    MSStyleFillRenderer *_styleFillRenderer;
    struct CGContext *_savedContextRef;
    NSMutableArray *_bitmapTransparencyLayerSavedStates;
    double _alphaValue;
    NSMutableArray *_parentGroupStack;
    NSMutableArray *_symbolMasterStack;
    NSGraphicsContext *_graphicsContext;
    NSDictionary *_renderers;
    struct CGPoint _scrollOrigin;
    struct CGRect _dirtyRect;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _rotateFlipTransform;
    struct CGAffineTransform _totalTransform;
}

@property(retain, nonatomic) NSDictionary *renderers; // @synthesize renderers=_renderers;
@property(retain, nonatomic) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
@property(retain, nonatomic) NSMutableArray *symbolMasterStack; // @synthesize symbolMasterStack=_symbolMasterStack;
@property(retain, nonatomic) NSMutableArray *parentGroupStack; // @synthesize parentGroupStack=_parentGroupStack;
@property(nonatomic) struct CGAffineTransform totalTransform; // @synthesize totalTransform=_totalTransform;
@property(nonatomic) struct CGAffineTransform rotateFlipTransform; // @synthesize rotateFlipTransform=_rotateFlipTransform;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
@property(nonatomic) int internalBlendMode; // @synthesize internalBlendMode=_internalBlendMode;
@property(retain, nonatomic) NSMutableArray *bitmapTransparencyLayerSavedStates; // @synthesize bitmapTransparencyLayerSavedStates=_bitmapTransparencyLayerSavedStates;
@property(nonatomic) struct CGContext *savedContextRef; // @synthesize savedContextRef=_savedContextRef;
@property(retain, nonatomic) MSStyleFillRenderer *styleFillRenderer; // @synthesize styleFillRenderer=_styleFillRenderer;
@property(retain, nonatomic) MSStyleImageRenderer *styleImageRenderer; // @synthesize styleImageRenderer=_styleImageRenderer;
@property(retain, nonatomic) MSStylePathRenderer *stylePathRenderer; // @synthesize stylePathRenderer=_stylePathRenderer;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(nonatomic) struct CGAffineTransform initialTransform; // @synthesize initialTransform=_initialTransform;
@property(retain, nonatomic) MSImmutableLayer *untilLayer; // @synthesize untilLayer=_untilLayer;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) double parentLayerOpacity; // @synthesize parentLayerOpacity=_parentLayerOpacity;
@property(nonatomic) BOOL shouldFlipShadows; // @synthesize shouldFlipShadows=_shouldFlipShadows;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(nonatomic) double shadowScale; // @synthesize shadowScale=_shadowScale;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(readonly, nonatomic) BOOL contextIsVectorBacked; // @synthesize contextIsVectorBacked=_contextIsVectorBacked;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) unsigned long long disableClippingFillsCounter; // @synthesize disableClippingFillsCounter=_disableClippingFillsCounter;
@property(nonatomic) unsigned long long disableDrawingFillsCounter; // @synthesize disableDrawingFillsCounter=_disableDrawingFillsCounter;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(nonatomic) BOOL isDrawingMask; // @synthesize isDrawingMask=_isDrawingMask;
@property(nonatomic) BOOL isDrawingPixelated; // @synthesize isDrawingPixelated=_isDrawingPixelated;
@property(nonatomic) BOOL isExporting; // @synthesize isExporting=_isExporting;
@property(nonatomic) BOOL isBitmapBacked; // @synthesize isBitmapBacked=_isBitmapBacked;
@property(nonatomic) BOOL isDrawingBackgroundForBlur; // @synthesize isDrawingBackgroundForBlur=_isDrawingBackgroundForBlur;
@property(nonatomic) BOOL isDrawingReflection; // @synthesize isDrawingReflection=_isDrawingReflection;
@property(nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
- (void).cxx_destruct;
- (void)applyShadow:(id)arg1 withXOffset:(double)arg2 respectFlipped:(BOOL)arg3;
- (void)applyShadow:(id)arg1 withXOffset:(double)arg2;
- (void)applyShadow:(id)arg1 respectFlipped:(BOOL)arg2;
- (void)applyShadow:(id)arg1;
- (void)applyStrokeColor:(id)arg1;
- (void)applyFillColor:(id)arg1;
- (BOOL)shouldSkipDrawingShadow:(id)arg1;
- (BOOL)isDrawingSymbol;
- (void)drawSymbolMaster:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (BOOL)canDrawSymbolMasterWithoutRiskingRecursion:(id)arg1;
- (BOOL)shouldDisableSubpixelQuantization;
- (BOOL)layerIntersectsDirtyRect:(id)arg1;
- (BOOL)shouldDrawLayer:(id)arg1 withMaskingShapeGroup:(id)arg2 ignoreDirtyRect:(BOOL)arg3;
- (BOOL)shouldClipFills;
- (void)doNotClipFillsInBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldDrawFills;
- (void)ifCondition:(BOOL)arg1 skipDrawingFillsInBlock:(CDUnknownBlockType)arg2;
- (void)applyLayerTransform:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 withOptions:(long long)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)prepareLayerDrawing:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (int)setBlendMode:(int)arg1;
- (double)setAlpha:(double)arg1;
- (double)multiplyAlphaBy:(double)arg1;
- (void)endBitmapTransparencyLayer:(double)arg1;
- (void)endQuartzTransparencyLayer:(double)arg1;
- (void)endTransparencyLayer:(double)arg1;
- (double)beginQuartzTransparencyLayerInRect:(struct CGRect)arg1;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1 inheritClip:(BOOL)arg2;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1;
- (double)beginBitmapTransparencyLayerInRect:(struct CGRect)arg1 inheritClip:(BOOL)arg2;
- (double)beginTransparencyLayer;
- (struct CGContext *)newTransparencyLayerContextForContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) double zoomLevelForShadows;
- (void)transparencyLayerInRect:(struct CGRect)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)transparencyLayerInBlock:(CDUnknownBlockType)arg1;
- (void)transparencyLayerInRect:(struct CGRect)arg1 mayOptimise:(BOOL)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)cancel;
- (id)popParentGroup;
- (void)pushParentGroup:(id)arg1;
- (id)parentGroupForLayer:(id)arg1;
- (void)popGraphicsState;
- (void)pushGraphicsState;
- (struct CGAffineTransform)accumulatedRotateFlipTransform;
- (struct CGAffineTransform)accumulatedTransform;
- (void)concatTransform:(struct CGAffineTransform)arg1;
- (void)setCachedValue:(id)arg1 forModelObject:(id)arg2 key:(id)arg3 zoomIndependent:(BOOL)arg4;
- (id)cachedValueForModelObject:(id)arg1 key:(id)arg2 zoomIndependent:(BOOL)arg3 orCreateWithBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)tearDown;
- (BOOL)hasGraphicsContext;
- (id)CIContextWithSoftwareRenderer:(BOOL)arg1;
- (void)setUp;
- (void)renderInBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MSBackgroundBlurRenderer *backgroundBlurRenderer; // @synthesize backgroundBlurRenderer=_backgroundBlurRenderer;
- (id)bitmapBackedSubContextWithContextRef:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (id)blurSubContextWithContextRef:(struct CGContext *)arg1 untilLayer:(id)arg2 rect:(struct CGRect)arg3;
- (id)subContextWithContextRef:(struct CGContext *)arg1 contextIsVectorBacked:(BOOL)arg2 atZoomLevel:(double)arg3;
- (id)rendererForClass:(Class)arg1;
- (id)rendererForLayer:(id)arg1;
- (id)initWithContextRef:(struct CGContext *)arg1 contextIsVectorBacked:(BOOL)arg2 colorSpace:(id)arg3 atZoomLevel:(double)arg4 document:(id)arg5;
- (id)init;

@end

