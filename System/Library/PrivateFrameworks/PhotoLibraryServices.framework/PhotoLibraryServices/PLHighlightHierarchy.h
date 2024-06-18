@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject

@property (readonly, nonatomic) NSMutableSet *moments;
@property (readonly, nonatomic) NSMutableSet *dayHighlights;
@property (readonly, nonatomic) NSMutableSet *dayGroupHighlights;

- (id)init;
- (void)addDayGroupHighlight:(id)a0;
- (void)addMoment:(id)a0;
- (void).cxx_destruct;
- (void)_addMoment:(id)a0;
- (void)_addDayHighlight:(id)a0;
- (void)addDayHighlight:(id)a0;

@end
