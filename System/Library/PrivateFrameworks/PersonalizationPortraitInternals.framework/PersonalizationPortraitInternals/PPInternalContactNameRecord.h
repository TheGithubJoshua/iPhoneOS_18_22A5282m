@class NSString, PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
    NSString *_localizedFullName;
}

- (id)sourceIdentifier;
- (double)score;
- (void)setScore:(double)a0;
- (id)nickname;
- (id)phoneticLastName;
- (unsigned char)source;
- (id)jobTitle;
- (id)lastName;
- (unsigned char)changeType;
- (id)phoneticFirstName;
- (id)firstName;
- (id)phoneticMiddleName;
- (void).cxx_destruct;
- (id)middleName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)organizationName;
- (id)localizedFullName;
- (id)relatedNames;
- (id)identifier;
- (id)cityNames;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)streetNames;
- (id)clientCopy;
- (id)initWithPBContactNameRecord:(id)a0;
- (id)pbRecord;

@end
