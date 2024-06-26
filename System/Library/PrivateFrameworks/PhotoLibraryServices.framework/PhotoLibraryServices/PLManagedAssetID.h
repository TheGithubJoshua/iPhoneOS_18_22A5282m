@class NSString, PLPhotoLibraryPathManagerIdentifier;

@interface PLManagedAssetID : NSObject <PLAssetID>

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (nonatomic) unsigned short bundleScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithManagedAsset:(id)a0;
- (id)initWithUUID:(id)a0 filename:(id)a1 directory:(id)a2 libraryID:(id)a3 bundleScope:(unsigned short)a4;

@end
