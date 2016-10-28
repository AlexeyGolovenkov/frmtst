Pod::Spec.new do |s|
  s.name             = "frmtst"
  s.version          = "1.9.23"
  s.license          = 'MPL'
  s.homepage         = "https://github.com/AlexeyGolovenkov/frmtst"
  s.author           = "ROKO Labs"
  s.summary          = "ROKO.Mobi iOS SDK"
  s.description      = <<-DESC
The ROKO.Mobi SDK provides a means for taking photos, dressing them up in stickers, and sharing the results with the world through FB, Twitter, e-mail, or sms.
                       DESC

  s.source           = { :git => "https://github.com/AlexeyGolovenkov/frmtst.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/rokolabs'
  s.platform         = :ios, '8.0'
  s.requires_arc     = true
  s.vendored_frameworks = 'ROKOMobi.framework'
  s.resource            = 'ROKOMobi.framework/ROKOMobiResources.bundle'
  s.xcconfig = {
    :"OTHER_LDFLAGS" => "$(inherited) -ObjC"
  }
end
