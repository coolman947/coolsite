class Coolsite < Formula
  desc "Description of the coolsite package"
  homepage "https://github.com/coolman947/coolsite"
  url "https://github.com/coolman947/coolsite/archive/v1.0.tar.gz"
  sha256 "680291e9e857cfd2d4875ad883fa8534e16a4f1275215ac9f3702ba0f02954e2"

  def install
    bin.install "coolsite.py"
  end

  test do
    system "#{bin}/coolsite.py", "--help"  # Or use "--version" if applicable
  end
end

