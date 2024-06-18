@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLoggingDebug;
+ (void)setLoggingDebug:(BOOL)a0;
+ (id)libraryVersion;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (void)markMMStrings:(BOOL)a0;
+ (BOOL)isMarkingMMStrings;
+ (id)addressObjectForPlaceData:(id)a0;

- (id)rawBytes;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)countryName;
- (id)addressDictionary;
- (id)weatherDisplayName;
- (id)address;
- (id)parkingDisplayName;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)venueShortAddress;
- (id)phoneticAddress;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)locationAddress;
- (id)initWithCurrentCountry;
- (id)initWithCNPostalAddress:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)shortAddress;
- (id)venueLabel:(long long)a0;
- (id)weatherLocationName;
- (id)venueLabel;
- (id)venueLevel;
- (id)name;
- (id)phoneticLocaleIdentifier;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)spokenName;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)initWithContactAddressDictionary:(id)a0 langauge:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)cnPostalAddress;
- (id)phoneticName;
- (void)dealloc;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)spokenStructuredAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)a0;

@end
