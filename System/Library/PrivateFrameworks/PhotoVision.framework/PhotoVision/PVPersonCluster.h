@class NSSet, NSMutableDictionary, NSMutableSet, NSDate, NSString;
@protocol PVFaceGroupProtocol, PVPersonProtocol, PVPhotoLibraryProtocol, PVFaceProtocol;

@interface PVPersonCluster : NSObject <PVPersonProtocol> {
    unsigned long long _hash;
    NSDate *_firstSeenDateWithoutOutliers;
}

@property (weak, nonatomic) id<PVPhotoLibraryProtocol> photoLibrary;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSDate *firstSeenDate;
@property (retain, nonatomic) id<PVPersonProtocol> sourcePerson;
@property (retain, nonatomic) id<PVFaceGroupProtocol> sourceFaceGroup;
@property (retain, nonatomic) NSSet *sourcePersonBackingAssetIdentifiers;
@property (retain, nonatomic) NSMutableSet *mergedPersonIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingFaceIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingAssetIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingMomentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *backingFaceIdentifiersByMomentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *representativeFaceByFaceIdentifiers;
@property (nonatomic) double interestingScore;
@property (nonatomic) BOOL highlyInteresting;
@property (nonatomic) BOOL quarantined;
@property (readonly, nonatomic) double libraryTimespan;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) BOOL favorite;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *anonymizedName;
@property (readonly, nonatomic) long long verifiedType;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id<PVFaceProtocol> keyFace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCaches;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)personLocalIdentifiers;
- (id)fetchFaces;
- (void)pv_addMergeCandidatePersons:(id)a0;
- (void)_cacheDates;
- (void)_cacheDatesWithoutOutliersWithMaximumDistanceBetweenMoments:(double)a0;
- (id)fetchAssets;
- (id)fetchMoments;
- (id)firstSeenDateWithoutOutliersForAgeType:(unsigned short)a0;
- (id)initWithFaceGroup:(id)a0 inPhotoLibrary:(id)a1;
- (id)initWithPerson:(id)a0 inPhotoLibrary:(id)a1;
- (double)sideFaceRatio;

@end
