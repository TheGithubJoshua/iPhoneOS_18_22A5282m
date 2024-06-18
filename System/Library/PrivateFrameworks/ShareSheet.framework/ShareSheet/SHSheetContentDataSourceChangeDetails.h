@class NSArray;

@interface SHSheetContentDataSourceChangeDetails : NSObject

@property (nonatomic) BOOL snapshotChanged;
@property (nonatomic) BOOL forceReload;
@property (nonatomic) BOOL animateDifferences;
@property (nonatomic) BOOL airDropBadgeChanged;
@property (nonatomic) BOOL sectionsChanged;
@property (nonatomic) BOOL peopleCountChanged;
@property (copy, nonatomic) NSArray *modifiedIdentifiers;

- (void).cxx_destruct;
- (id)description;

@end
