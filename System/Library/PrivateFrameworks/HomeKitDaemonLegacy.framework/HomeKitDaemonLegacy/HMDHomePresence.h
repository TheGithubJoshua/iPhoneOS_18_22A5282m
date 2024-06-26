@class NSArray, NSDictionary, HMDHome, NSString, HMDDevice;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>

@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice;
@property (readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)initWithHome:(id)a0 userPresenceMap:(id)a1 lastUpdateByDevice:(id)a2;
- (BOOL)isNoUserAtHome;
- (BOOL)isPresenceRegionKnownForUser:(id)a0;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;

@end
