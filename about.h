<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>About Us | Daudi Greens Foundation</title>
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@400;600;700&display=swap" rel="stylesheet">
    <script src="https://unpkg.com/lucide@latest"></script>
    <style>
        /* Shared Styles */
        * { margin:0; padding:0; box-sizing:border-box; }
        body { font-family:'Poppins', sans-serif; background:#f7f9f6; color:#333; }
        
        /* Navbar (Same as Home) */
        header { position: sticky; top:0; z-index:1000; background:white; padding:1rem 2rem; display:flex; justify-content:space-between; align-items:center; box-shadow:0 2px 15px rgba(0,0,0,0.05); }
        .logo { display:flex; align-items:center; font-weight:800; font-size:1.4rem; color:#1b5e20; text-decoration:none; gap:10px; }
        .logo-icon { width: 40px; height: 40px; background: #e8f5e9; border-radius: 10px; display: flex; align-items: center; justify-content: center; border: 2px solid #2e7d32; color: #2e7d32; }
        nav ul { list-style:none; display:flex; gap:2rem; }
        nav ul li a { text-decoration:none; color:#555; font-weight:600; font-size: 0.95rem; }
        nav ul li a.active { color:#2e7d32; }

        /* About Content */
        .about-hero { background: #1b5e20; color: white; padding: 4rem 2rem; text-align: center; }
        .content-section { max-width: 1000px; margin: 4rem auto; padding: 0 2rem; line-height: 1.8; }
        .mission-grid { display: grid; grid-template-columns: 1fr 1fr; gap: 40px; margin-top: 3rem; align-items: center; }
        
        @media (max-width: 768px) { .mission-grid { grid-template-columns: 1fr; } }

        /* Footer (Same as Home) */
        footer { background:#1b5e20; color:white; padding:3rem 2rem; margin-top: 4rem; }
    </style>
</head>
<body>

<header>
  <a href="index.html" class="logo">
    <div class="logo-icon"><i data-lucide="leaf"></i></div>
    <span>DAUDI <span style="color:#4caf50;">GREENS</span></span>
  </a>
  <nav>
    <ul>
      <li><a href="index.html">Home</a></li>
      <li><a href="about.html" class="active">About</a></li>
      <li><a href="services.html">Services</a></li>
      <li><a href="gallery.html">Gallery</a></li>
      <li><a href="contact.html">Contact</a></li>
    </ul>
  </nav>
</header>

<section class="about-hero">
    <h1>Our Story</h1>
    <p>Growing a sustainable future for Kenya, one garden at a time.</p>
</section>

<section class="content-section">
    <div class="mission-grid">
        <div>
            <h2 style="color: #1b5e20; margin-bottom: 1rem;">Who We Are</h2>
            <p>Daudi Greens Foundation (DGF) is a non-profit organization dedicated to environmental conservation and smart agriculture. We believe that green spaces shouldn't just be beautiful—they should be functional, sustainable, and life-giving.</p>
        </div>
        <img src="https://images.unsplash.com/photo-1542601906990-b4d3fb778b09?auto=format&fit=crop&w=600" alt="Planting" style="width:100%; border-radius:15px; box-shadow: 0 10px 20px rgba(0,0,0,0.1);">
    </div>
</section>

<footer>
  <div style="text-align:center;">
    <p>&copy; 2026 Daudi Greens Foundation. All rights reserved.</p>
  </div>
</footer>

<script>lucide.createIcons();</script>
</body>
</html>