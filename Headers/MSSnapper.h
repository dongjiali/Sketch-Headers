#import "NSObject.h"

@class MSSnapperData;

@interface MSSnapper : NSObject
{
    BOOL _useAlignmentGuides;
    id <MSBasicDelegate> _delegate;
    double _zoomValue;
    MSSnapperData *_snapperData;
}

@property(retain, nonatomic) MSSnapperData *snapperData; // @synthesize snapperData=_snapperData;
@property(nonatomic) BOOL useAlignmentGuides; // @synthesize useAlignmentGuides=_useAlignmentGuides;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)snapsForItems:(id)arg1 skipLayers:(id)arg2;
- (void)snapItem:(id)arg1 enumerations:(id)arg2 lines:(id)arg3 visible:(BOOL)arg4 snap:(CDStruct_7ddbbeae)arg5 resize:(BOOL)arg6 edgesMask:(long long)arg7;
- (void)snapItem:(id)arg1 toLines:(id)arg2 visible:(BOOL)arg3 snap:(CDStruct_7ddbbeae)arg4 resize:(BOOL)arg5 edges:(unsigned long long)arg6;
- (void)changeSnapItem:(id)arg1 forLine:(id)arg2 visible:(BOOL)arg3 direction:(unsigned long long)arg4 snap:(CDStruct_7ddbbeae)arg5 block:(CDUnknownBlockType)arg6;
- (void)snapItem:(id)arg1 snap:(CDStruct_7ddbbeae)arg2 resize:(BOOL)arg3 rulersVisible:(BOOL)arg4 edges:(unsigned long long)arg5;
- (id)snapLayerKeys:(id)arg1 rulersVisible:(BOOL)arg2;
- (id)snapItemDuringResize:(id)arg1 rulersVisible:(BOOL)arg2 edges:(unsigned long long)arg3;
- (id)snapItemDuringDrag:(id)arg1 rulersVisible:(BOOL)arg2;
- (void)snapItemSize:(id)arg1 onAxis:(unsigned long long)arg2 snap:(CDStruct_7ddbbeae)arg3 edges:(long long)arg4;
- (void)collectSnapsForItem:(id)arg1 withLayer:(id)arg2 onAxis:(unsigned long long)arg3 snap:(CDStruct_7ddbbeae)arg4;
- (CDStruct_7ddbbeae)snapLayerSize:(id)arg1 snap:(CDStruct_7ddbbeae)arg2 edges:(long long)arg3;
- (BOOL)rect:(struct CGRect)arg1 isOnLineWithRect:(struct CGRect)arg2 inDirection:(unsigned long long)arg3;
- (struct CGRect)snapFrame:(struct CGRect)arg1 direction:(unsigned long long)arg2 resize:(BOOL)arg3 closestDistance:(struct CGRect)arg4;
- (id)findClosestDistanceMatchForItem:(id)arg1 againstItems:(id)arg2 direction:(unsigned long long)arg3;
- (void)snapItem:(id)arg1 againstItems:(id)arg2 inDirection:(unsigned long long)arg3 resize:(BOOL)arg4;
- (id)distanceRectanglesBetweenLayers:(id)arg1 inDirection:(unsigned long long)arg2;
- (id)layersOnLineFromLayer:(id)arg1 inDirection:(unsigned long long)arg2 order:(long long)arg3;
- (void)snapItem:(id)arg1 onAxis:(unsigned long long)arg2 resize:(BOOL)arg3;
- (CDStruct_7ddbbeae)snapItemByDistance:(id)arg1 edges:(long long)arg2 resize:(BOOL)arg3;

@end
