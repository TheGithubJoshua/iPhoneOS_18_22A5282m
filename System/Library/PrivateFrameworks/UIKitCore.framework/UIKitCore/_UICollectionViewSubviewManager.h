@class NSMutableDictionary;
@protocol _UICollectionViewSubviewManagerDelegate;

@interface _UICollectionViewSubviewManager : NSObject {
    NSMutableDictionary *_cells;
    NSMutableDictionary *_supplementaries;
    NSMutableDictionary *_decorations;
    BOOL _indexPathValidationEnabled;
    id<_UICollectionViewSubviewManagerDelegate> _delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
