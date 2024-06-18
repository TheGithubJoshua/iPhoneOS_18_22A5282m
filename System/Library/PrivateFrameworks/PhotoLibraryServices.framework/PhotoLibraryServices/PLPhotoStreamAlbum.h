@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;

+ (id)photoStreamAlbumWithStreamID:(id)a0 inPhotoLibrary:(id)a1 createIfNeeded:(BOOL)a2;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;

- (void)awakeFromInsert;
- (void)enforceImageLimitIfNecessary;
- (void)addAssetOrderedByDataTaken:(id)a0;
- (BOOL)shouldDeleteWhenEmpty;

@end
