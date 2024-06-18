@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}

- (id)_titleLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_subtitleLabel;
- (void)setExpired:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)rowHeight;
- (id)_certificateImage;
- (id)_notTrustedGradient;
- (id)_trustedLabel;
- (void)setTrustSubtitle:(id)a0;
- (void)setTrustTitle:(id)a0;

@end
