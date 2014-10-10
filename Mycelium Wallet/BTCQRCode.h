#import <Foundation/Foundation.h>

@interface BTCQRCode : NSObject

/*!
 * Returns a QR code image with a given size.
 * The `string` is typically a bitcoin address in Base58Check format.
 */
+ (UIImage*) imageForString:(NSString*)string size:(CGSize)size scale:(CGFloat)scale;

/*!
 * Returns a QR code image with a given size.
 * The `url` is typically a bitcoin payment request "bitcoin:<address>?amount=..."
 */
+ (UIImage*) imageForURL:(NSURL*)url size:(CGSize)size scale:(CGFloat)scale;

@end
