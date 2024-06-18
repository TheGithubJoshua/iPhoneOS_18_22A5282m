@class GEOAddressObject, NSString, NSDictionary, GEOLocation, NSURL, GEOPlace;

@interface GEOMapItemAssistant : GEOBaseMapItem {
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (unsigned int)_sampleSizeForUserRatingScore;
- (float)_normalizedUserRatingScore;
- (BOOL)_responseStatusIsIncomplete;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasMUID;
- (BOOL)_hasUserRatingScore;
- (id)_place;
- (id)_businessURL;
- (unsigned long long)_muid;
- (id)addressDictionary;
- (id)weatherDisplayName;
- (BOOL)_hasResolvablePartialInformation;
- (id)addressObject;
- (id)geoAddress;
- (BOOL)isValid;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
