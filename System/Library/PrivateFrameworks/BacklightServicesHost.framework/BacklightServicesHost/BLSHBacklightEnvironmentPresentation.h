@class NSSet, NSArray, BLSHPresentationDateSpecifier, CAContext, BLSHFlipbookContext, NSDate;

@interface BLSHBacklightEnvironmentPresentation : NSObject

@property (readonly, nonatomic) BLSHPresentationDateSpecifier *currentSpecifier;
@property (readonly, nonatomic) NSSet *environmentsSet;
@property (readonly, copy, nonatomic) NSArray *presentationEntries;
@property (readonly, copy, nonatomic) NSArray *environments;
@property (readonly, nonatomic) CAContext *caContext;
@property (readonly, nonatomic) BLSHFlipbookContext *flipbookContext;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, getter=isLiveUpdating) BOOL liveUpdating;
@property (readonly, getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;

- (id)bls_shortLoggingString;
- (void)invalidateContentForReason:(id)a0;
- (id)bls_loggingString;
- (id)differenceFromPresentation:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)containsEnvironment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithPresentationEntries:(id)a0 caContext:(id)a1 expirationDate:(id)a2;
- (id)initWithEnvironments:(id)a0 caContext:(id)a1 expirationDate:(id)a2;
- (void)differenceFromPresentation:(id)a0 forEachRemoval:(id /* block */)a1 forEachAddition:(id /* block */)a2;
- (id)initWithPresentationEntries:(id)a0 flipbookContext:(id)a1 expirationDate:(id)a2;

@end
